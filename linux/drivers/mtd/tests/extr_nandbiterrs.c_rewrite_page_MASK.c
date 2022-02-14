
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_oob_ops {scalar_t__ len; scalar_t__ retlen; int * oobbuf; int datbuf; scalar_t__ ooboffs; scalar_t__ oobretlen; scalar_t__ ooblen; int mode; } ;
struct TYPE_3__ {scalar_t__ writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,struct mtd_oob_ops*) ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(int VAR_5)
{
 int VAR_6 = 0;
 struct mtd_oob_ops VAR_7;

 if (VAR_5)
  FUNC_2("rewrite page\n");

 VAR_7.mode = VAR_1;
 VAR_7.len = VAR_2->writesize;
 VAR_7.retlen = 0;
 VAR_7.ooblen = 0;
 VAR_7.oobretlen = 0;
 VAR_7.ooboffs = 0;
 VAR_7.datbuf = VAR_4;
 VAR_7.oobbuf = ((void*)0);

 VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_7);
 if (VAR_6 || VAR_7.retlen != VAR_2->writesize) {
  FUNC_1("error: write_oob failed (%d)\n", VAR_6);
  if (!VAR_6)
   VAR_6 = -VAR_0;
 }

 return VAR_6;
}
