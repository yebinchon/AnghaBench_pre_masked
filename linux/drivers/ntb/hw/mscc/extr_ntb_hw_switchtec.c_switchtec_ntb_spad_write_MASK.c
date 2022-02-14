
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct switchtec_ntb {TYPE_1__* self_shared; } ;
struct ntb_dev {int dummy; } ;
struct TYPE_2__ {int * spad; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct switchtec_ntb* FUNC_1 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_2(struct ntb_dev *VAR_2, int VAR_3, u32 VAR_4)
{
 struct switchtec_ntb *VAR_5 = FUNC_1(VAR_2);

 if (VAR_3 < 0 || VAR_3 >= FUNC_0(VAR_5->self_shared->spad))
  return -VAR_0;

 if (!VAR_5->self_shared)
  return -VAR_1;

 VAR_5->self_shared->spad[VAR_3] = VAR_4;

 return 0;
}
