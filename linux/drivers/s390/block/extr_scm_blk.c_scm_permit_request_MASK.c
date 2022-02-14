
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_blk_dev {scalar_t__ state; } ;
struct request {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct request*) ;

__attribute__((used)) static bool FUNC_1(struct scm_blk_dev *VAR_2, struct request *VAR_3)
{
 return FUNC_0(VAR_3) != VAR_1 || VAR_2->state != VAR_0;
}
