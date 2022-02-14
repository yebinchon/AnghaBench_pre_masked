
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_ae_dev {scalar_t__ reset_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static inline bool FUNC_0(struct hnae3_ae_dev *VAR_5)
{
 return (VAR_5 && (VAR_5->reset_type == VAR_1 ||
      VAR_5->reset_type == VAR_0 ||
      VAR_5->reset_type == VAR_3 ||
      VAR_5->reset_type == VAR_2 ||
      VAR_5->reset_type == VAR_4));
}
