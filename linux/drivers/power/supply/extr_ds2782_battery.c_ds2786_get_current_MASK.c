
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds278x_info {int rsns; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ds278x_info*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct ds278x_info *VAR_2, int *VAR_3)
{
 int VAR_4;
 s16 VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;
 *VAR_3 = (VAR_5 / 16) * (VAR_0 / VAR_2->rsns);
 return 0;
}
