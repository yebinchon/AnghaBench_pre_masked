
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct zcrypt_device_status_ext {int functions; int online; int qid; } ;
struct cca_info {char cur_mk_state; int hwtype; scalar_t__ cur_mkvp; char old_mk_state; scalar_t__ old_mkvp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int,struct cca_info*,int) ;
 int FUNC_3 (struct zcrypt_device_status_ext*) ;
 void* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct zcrypt_device_status_ext*) ;

int FUNC_6(u32 **VAR_4, u32 *VAR_5, u16 VAR_6, u16 VAR_7,
    int VAR_8, u64 VAR_9, u64 VAR_10, int VAR_11)
{
 struct zcrypt_device_status_ext *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = 0;
 struct cca_info VAR_20;

 *VAR_4 = ((void*)0);
 *VAR_5 = 0;


 VAR_12 = FUNC_4(VAR_3,
          sizeof(struct zcrypt_device_status_ext),
          VAR_2);
 if (!VAR_12)
  return -VAR_1;
 FUNC_5(VAR_12);


 while (1) {
  VAR_14 = 0;

  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   VAR_15 = FUNC_0(VAR_12[VAR_13].qid);
   VAR_16 = FUNC_1(VAR_12[VAR_13].qid);

   if (!VAR_12[VAR_13].online)
    continue;

   if (!(VAR_12[VAR_13].functions & 0x04))
    continue;

   if (VAR_6 != 0xFFFF && VAR_15 != VAR_6)
    continue;

   if (VAR_7 != 0xFFFF && VAR_16 != VAR_7)
    continue;

   if (FUNC_2(VAR_15, VAR_16, &VAR_20, VAR_11))
    continue;

   if (VAR_20.cur_mk_state != '2')
    continue;

   if (VAR_8 > 0 && VAR_8 > VAR_20.hwtype)
    continue;
   if (VAR_9 || VAR_10) {

    VAR_17 = VAR_18 = 0;
    if (VAR_9 && VAR_9 == VAR_20.cur_mkvp)
     VAR_17 = 1;
    if (VAR_10 && VAR_20.old_mk_state == '2' &&
        VAR_10 == VAR_20.old_mkvp)
     VAR_18 = 1;
    if ((VAR_9 || VAR_10) &&
        (VAR_17 + VAR_18 < 1))
     continue;
   }

   if (*VAR_4 && VAR_14 < *VAR_5)
    (*VAR_4)[VAR_14] = (((u16)VAR_15) << 16) | ((u16) VAR_16);
   VAR_14++;
  }

  if (*VAR_4)
   break;

  if (!VAR_14) {
   VAR_19 = -VAR_0;
   break;
  }
  *VAR_5 = VAR_14;

  *VAR_4 = FUNC_4(VAR_14, sizeof(u32), VAR_2);
  if (!*VAR_4) {
   VAR_19 = -VAR_1;
   break;
  }
  VAR_11 = 0;
 }

 FUNC_3(VAR_12);
 return VAR_19;
}
