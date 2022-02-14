
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int num_proto_errs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct rt2x00_dev *VAR_4, int VAR_5)
{
 if (VAR_5 == -VAR_0 || VAR_5 == -VAR_1)
  return 1;

 if (VAR_5 == -VAR_2 || VAR_5 == -VAR_3)
  VAR_4->num_proto_errs++;
 else
  VAR_4->num_proto_errs = 0;

 if (VAR_4->num_proto_errs > 3)
  return 1;

 return 0;
}
