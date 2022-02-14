
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* state; } ;
struct TYPE_3__ {void* state; } ;
struct lcs_card {TYPE_2__ read; TYPE_1__ write; int state; scalar_t__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct lcs_card*,int ) ;
 int FUNC_2 (struct lcs_card*) ;
 int FUNC_3 (struct lcs_card*) ;
 int FUNC_4 (struct lcs_card*) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct lcs_card *VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(2, VAR_4, "lcsdetct");

 if (VAR_5->dev)
  FUNC_5(VAR_5->dev);
 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 == 0) {
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6 == 0) {
   VAR_6 = FUNC_1(VAR_5, VAR_3);
   if (VAR_6 == 0)
    VAR_6 = FUNC_3(VAR_5);
  }
 }
 if (VAR_6 == 0) {
  VAR_5->state = VAR_1;
 } else {
  VAR_5->state = VAR_0;
  VAR_5->write.state = VAR_2;
  VAR_5->read.state = VAR_2;
 }
 return VAR_6;
}
