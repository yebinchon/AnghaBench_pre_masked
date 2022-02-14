
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {scalar_t__ fl_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline int FUNC_0(struct file_lock *VAR_5, int VAR_6)
{
 if (VAR_5->fl_type == VAR_0)
  return VAR_6 ? VAR_1 : VAR_2;
 return VAR_6 ? VAR_3 : VAR_4;
}
