
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct waveform_hdr {int fvsn; int wfm_cs; int mc; int trc; scalar_t__* stuff2a; int* wmta; unsigned char swtb; unsigned char endb; int luts; } ;
struct metronomefb_par {int* metromem_wfm; size_t dt; int frame_count; TYPE_1__* info; } ;
struct device {int dummy; } ;
struct TYPE_4__ {size_t wfm_size; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int*) ;
 int FUNC_1 (struct device*,char*,...) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int*) ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_3(u8 *VAR_3, size_t VAR_4, int VAR_5, int VAR_6,
    struct metronomefb_par *VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 unsigned char VAR_12;
 u8 VAR_13;
 int VAR_14;
 int VAR_15, VAR_16;
 int VAR_17 = 0;
 struct waveform_hdr *VAR_18;
 u8 *VAR_19 = VAR_7->metromem_wfm;
 struct device *VAR_20 = VAR_7->info->dev;

 if (VAR_2)
  VAR_1[VAR_7->dt].wfm_size = VAR_2;

 if (VAR_4 != VAR_1[VAR_7->dt].wfm_size) {
  FUNC_1(VAR_20, "Error: unexpected size %zd != %d\n", VAR_4,
     VAR_1[VAR_7->dt].wfm_size);
  return -VAR_0;
 }

 VAR_18 = (struct waveform_hdr *) VAR_3;

 if (VAR_18->fvsn != 1) {
  FUNC_1(VAR_20, "Error: bad fvsn %x\n", VAR_18->fvsn);
  return -VAR_0;
 }
 if (VAR_18->luts != 0) {
  FUNC_1(VAR_20, "Error: bad luts %x\n", VAR_18->luts);
  return -VAR_0;
 }
 VAR_13 = FUNC_0(32, 47, VAR_3);
 if (VAR_13 != VAR_18->wfm_cs) {
  FUNC_1(VAR_20, "Error: bad cksum %x != %x\n", VAR_13,
     VAR_18->wfm_cs);
  return -VAR_0;
 }
 VAR_18->mc += 1;
 VAR_18->trc += 1;
 for (VAR_11 = 0; VAR_11 < 5; VAR_11++) {
  if (*(VAR_18->stuff2a + VAR_11) != 0) {
   FUNC_1(VAR_20, "Error: unexpected value in padding\n");
   return -VAR_0;
  }
 }





 if ((sizeof(*VAR_18) + VAR_18->trc) > VAR_4)
  return -VAR_0;

 for (VAR_11 = sizeof(*VAR_18); VAR_11 <= sizeof(*VAR_18) + VAR_18->trc; VAR_11++) {
  if (VAR_3[VAR_11] > VAR_6) {
   VAR_10 = VAR_11 - sizeof(*VAR_18) - 1;
   break;
  }
 }


 VAR_14 = sizeof(*VAR_18) + VAR_18->trc + 1;
 if (VAR_14 >= VAR_4)
  return -VAR_0;
 VAR_13 = FUNC_0(sizeof(*VAR_18), VAR_14, VAR_3);
 if (VAR_13 != VAR_3[VAR_14]) {
  FUNC_1(VAR_20, "Error: bad temperature range table cksum"
    " %x != %x\n", VAR_13, VAR_3[VAR_14]);
  return -VAR_0;
 }


 VAR_9 = FUNC_2(VAR_18->wmta) & 0x00FFFFFF;
 VAR_14 = VAR_9 + VAR_5*4 + 3;
 if (VAR_14 >= VAR_4)
  return -VAR_0;
 VAR_13 = FUNC_0(VAR_14 - 3, VAR_14, VAR_3);
 if (VAR_13 != VAR_3[VAR_14]) {
  FUNC_1(VAR_20, "Error: bad mode table address cksum"
    " %x != %x\n", VAR_13, VAR_3[VAR_14]);
  return -VAR_0;
 }


 VAR_8 = FUNC_2(VAR_3 + VAR_9 + VAR_5 * 4) & 0x00FFFFFF;
 VAR_14 = VAR_8 + VAR_10*4 + 3;
 if (VAR_14 >= VAR_4)
  return -VAR_0;
 VAR_13 = FUNC_0(VAR_14 - 3, VAR_14, VAR_3);
 if (VAR_13 != VAR_3[VAR_14]) {
  FUNC_1(VAR_20, "Error: bad temperature table address cksum"
   " %x != %x\n", VAR_13, VAR_3[VAR_14]);
  return -VAR_0;
 }



 VAR_15 = FUNC_2(VAR_3 + VAR_8 + VAR_10 * 4) & 0x00FFFFFF;
 VAR_16 = VAR_15;
 if (VAR_15 >= VAR_4)
  return -VAR_0;
 while (VAR_15 < VAR_4) {
  unsigned char VAR_21;
  VAR_12 = VAR_3[VAR_15++];
  if (VAR_12 == VAR_18->swtb) {
   while (((VAR_12 = VAR_3[VAR_15++]) != VAR_18->swtb) &&
    VAR_15 < VAR_4)
    VAR_19[VAR_17++] = VAR_12;

   continue;
  }

  if (VAR_12 == VAR_18->endb)
   break;

  VAR_21 = VAR_3[VAR_15++];
  for (VAR_11 = 0; VAR_11 <= VAR_21; VAR_11++)
   VAR_19[VAR_17++] = VAR_12;
 }

 VAR_14 = VAR_15;
 if (VAR_14 >= VAR_4)
  return -VAR_0;
 VAR_13 = FUNC_0(VAR_16, VAR_14, VAR_3);
 if (VAR_13 != VAR_3[VAR_14]) {
  FUNC_1(VAR_20, "Error: bad waveform data cksum"
    " %x != %x\n", VAR_13, VAR_3[VAR_14]);
  return -VAR_0;
 }
 VAR_7->frame_count = (VAR_17/64);

 return 0;
}
