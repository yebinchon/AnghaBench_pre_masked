
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int status; int options; int cpaddr; } ;
struct tape_device {int tape_dnr; int cdev; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned long,int,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct tape_device *VAR_3, struct tape_request *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(
  VAR_3->cdev,
  VAR_4->cpaddr,
  (unsigned long) VAR_4,
  0x00,
  VAR_4->options
 );
 if (VAR_5 == 0) {
  VAR_4->status = VAR_1;
 } else if (VAR_5 == -VAR_0) {

  VAR_4->status = VAR_2;
  FUNC_2(&VAR_3->tape_dnr, 0);
  VAR_5 = 0;
 } else {

  FUNC_0(1, "tape: start request failed with RC = %i\n", VAR_5);
 }
 return VAR_5;
}
