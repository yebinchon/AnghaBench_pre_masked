
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int height; int top; int left; int width; } ;
struct bttv_overlay {int nclips; TYPE_4__ w; int clips; } ;
struct bttv_format {int depth; } ;
struct TYPE_6__ {int bytesperline; } ;
struct TYPE_7__ {TYPE_2__ fmt; scalar_t__ base; } ;
struct TYPE_5__ {int pci; } ;
struct bttv {scalar_t__ opt_vcr_hack; TYPE_3__ fbuf; TYPE_1__ c; } ;
struct btcx_skiplist {int start; int end; } ;
struct btcx_riscmem {int size; int * cpu; int * jmp; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int,int*,struct btcx_skiplist*,unsigned int*,int ,int) ;
 int FUNC_2 (int ,struct btcx_riscmem*,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct btcx_skiplist*) ;
 struct btcx_skiplist* FUNC_5 (int,int,int ) ;

__attribute__((used)) static int
FUNC_6(struct bttv *VAR_9, struct btcx_riscmem *VAR_10,
    const struct bttv_format *VAR_11, struct bttv_overlay *VAR_12,
    int VAR_13, int VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 unsigned VAR_21, VAR_22;
 struct btcx_skiplist *VAR_23;
 __le32 *VAR_24;
 u32 VAR_25,VAR_26;
 u32 VAR_27;


 VAR_23 = FUNC_5(VAR_12->nclips, sizeof(*VAR_23),VAR_7);
 if (((void*)0) == VAR_23)
  return -VAR_6;



 VAR_15 = (3 * VAR_12->nclips + 2) *
  ((VAR_13 || VAR_14) ? (VAR_12->w.height+1)>>1 : VAR_12->w.height);
 VAR_15 += 4;
 if ((VAR_16 = FUNC_2(VAR_9->c.pci,VAR_10,VAR_15*4)) < 0) {
  FUNC_4(VAR_23);
  return VAR_16;
 }


 VAR_24 = VAR_10->cpu;
 *(VAR_24++) = FUNC_3(VAR_4|VAR_0);
 *(VAR_24++) = FUNC_3(0);

 VAR_27 = (unsigned long)VAR_9->fbuf.base;
 VAR_27 += VAR_9->fbuf.fmt.bytesperline * VAR_12->w.top;
 VAR_27 += (VAR_11->depth >> 3) * VAR_12->w.left;


 for (VAR_18 = -1, VAR_17 = 0; VAR_17 < VAR_12->w.height;
      VAR_17++, VAR_27 += VAR_9->fbuf.fmt.bytesperline) {
  if ((VAR_9->opt_vcr_hack) &&
       (VAR_17 >= (VAR_12->w.height - VAR_8)))
   continue;
  if ((VAR_17%2) == 0 && VAR_13)
   continue;
  if ((VAR_17%2) == 1 && VAR_14)
   continue;


  if (VAR_17 > VAR_18)
   FUNC_1(VAR_17, VAR_12->w.width, &VAR_18,
     VAR_23, &VAR_22, VAR_12->clips, VAR_12->nclips);


  for (VAR_19 = 0, VAR_21 = 0; VAR_19 < VAR_12->w.width; VAR_19 = VAR_20) {
   if (VAR_21 >= VAR_22) {
    VAR_25 = VAR_5;
    VAR_20 = VAR_12->w.width;
   } else if (VAR_19 < VAR_23[VAR_21].start) {
    VAR_25 = VAR_5;
    VAR_20 = VAR_23[VAR_21].start;
   } else {
    VAR_25 = VAR_2;
    VAR_20 = VAR_23[VAR_21].end;
    VAR_21++;
   }
   if (VAR_5 == VAR_25)
    VAR_26 = VAR_27 + (VAR_11->depth>>3)*VAR_19;
   else
    VAR_26 = 0;

   if (0 == VAR_19)
    VAR_25 |= VAR_3;
   if (VAR_12->w.width == VAR_20)
    VAR_25 |= VAR_1;
   VAR_25 |= (VAR_11->depth>>3) * (VAR_20-VAR_19);

   *(VAR_24++)=FUNC_3(VAR_25);
   if (0 != VAR_26)
    *(VAR_24++)=FUNC_3(VAR_26);
  }
 }


 VAR_10->jmp = VAR_24;
 FUNC_0((VAR_10->jmp - VAR_10->cpu + 2) * sizeof(*VAR_10->cpu) > VAR_10->size);
 FUNC_4(VAR_23);
 return 0;
}
