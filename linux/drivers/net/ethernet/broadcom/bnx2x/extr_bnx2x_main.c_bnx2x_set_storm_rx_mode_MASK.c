
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x {TYPE_1__* fp; int rx_mode; } ;
struct TYPE_2__ {int cl_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct bnx2x*,int ,unsigned long*,unsigned long*) ;
 int FUNC_3 (struct bnx2x*,int ,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_3)
{
 unsigned long VAR_4 = 0, VAR_5 = 0;
 unsigned long VAR_6 = 0, VAR_7 = 0;
 int VAR_8;

 if (!FUNC_0(VAR_3))

  FUNC_1(VAR_0, &VAR_4);

 VAR_8 = FUNC_2(VAR_3, VAR_3->rx_mode, &VAR_6,
         &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_1(VAR_1, &VAR_5);
 FUNC_1(VAR_2, &VAR_5);

 return FUNC_3(VAR_3, VAR_3->fp->cl_id, VAR_4,
       VAR_6, VAR_7,
       VAR_5);
}
