
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atio {scalar_t__ entry_type; int attr_n_length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct atio *VAR_3)
{
 if (VAR_3->entry_type == VAR_0 &&
     ((FUNC_0(VAR_3->attr_n_length) & VAR_1) <
      VAR_2))
  return 1;
 else
  return 0;
}
