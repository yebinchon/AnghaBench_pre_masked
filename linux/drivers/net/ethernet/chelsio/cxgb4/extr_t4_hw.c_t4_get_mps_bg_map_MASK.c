
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int u32 ;
struct TYPE_2__ {unsigned int* mps_bg_map; } ;
struct adapter {int flags; int pf; int mbox; TYPE_1__ params; } ;


 int FUNC_0 (struct adapter*,char*,int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct adapter*,int) ;
 int FUNC_5 (struct adapter*,int ,int ,int ,int,int*,int*) ;
 int FUNC_6 (struct adapter*,int ) ;

unsigned int FUNC_7(struct adapter *VAR_5, int VAR_6)
{
 u8 *VAR_7;
 unsigned int VAR_8;

 VAR_8 = 1 << FUNC_3(FUNC_6(VAR_5, VAR_4));
 if (VAR_6 >= VAR_8) {
  FUNC_0(VAR_5, "MPS Port Index %d >= Nports %d\n",
   VAR_6, VAR_8);
  return 0;
 }



 VAR_7 = VAR_5->params.mps_bg_map;
 if (VAR_7[VAR_6])
  return VAR_7[VAR_6];
 if (VAR_5->flags & VAR_0) {
  u32 VAR_9, VAR_10;
  int VAR_11;

  VAR_9 = (FUNC_1(VAR_1) |
    FUNC_2(VAR_2));
  VAR_11 = FUNC_5(VAR_5, VAR_5->mbox, VAR_5->pf,
      0, 1, &VAR_9, &VAR_10);
  if (!VAR_11) {
   int VAR_12;




   for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++, VAR_10 >>= 8)
    VAR_7[VAR_12] = VAR_10 & 0xff;

   return VAR_7[VAR_6];
  }
 }





 VAR_7[VAR_6] = FUNC_4(VAR_5, VAR_6);
 return VAR_7[VAR_6];
}
