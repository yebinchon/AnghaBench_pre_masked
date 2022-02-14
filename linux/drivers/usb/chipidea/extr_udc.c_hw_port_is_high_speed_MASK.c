
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lpm; } ;
struct ci_hdrc {TYPE_1__ hw_bank; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ci_hdrc*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ci_hdrc *VAR_4)
{
 return VAR_4->hw_bank.lpm ? FUNC_0(VAR_4, VAR_1, VAR_0) :
  FUNC_0(VAR_4, VAR_2, VAR_3);
}
