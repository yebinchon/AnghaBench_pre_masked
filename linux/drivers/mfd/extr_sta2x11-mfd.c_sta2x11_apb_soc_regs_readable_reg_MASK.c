
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (unsigned int,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_8,
           unsigned int VAR_9)
{
 return VAR_9 <= VAR_4 ||
  FUNC_0(VAR_9, VAR_1, VAR_5) ||
  FUNC_0(VAR_9, VAR_2,
       VAR_6) ||
  VAR_9 == VAR_3 ||
  FUNC_0(VAR_9, VAR_0, VAR_7);
}
