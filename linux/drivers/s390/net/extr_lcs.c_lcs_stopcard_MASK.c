
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct lcs_card {scalar_t__ state; TYPE_2__ write; TYPE_1__ read; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct lcs_card*) ;
 int FUNC_2 (struct lcs_card*) ;
 int FUNC_3 (struct lcs_card*,int ) ;
 int FUNC_4 (struct lcs_card*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct lcs_card *VAR_6)
{
 int VAR_7;

 FUNC_0(3, VAR_5, "stopcard");

 if (VAR_6->read.state != VAR_3 &&
     VAR_6->write.state != VAR_3 &&
     VAR_6->read.state != VAR_2 &&
     VAR_6->write.state != VAR_2 &&
     VAR_6->state == VAR_1) {
  FUNC_1(VAR_6);
  VAR_7 = FUNC_3(VAR_6,VAR_4);
  VAR_7 = FUNC_2(VAR_6);
 }
 VAR_7 = FUNC_4(VAR_6);
 VAR_6->state = VAR_0;

 return VAR_7;
}
