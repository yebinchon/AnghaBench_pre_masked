
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_oob_ops {int ooblen; scalar_t__ mode; int oobretlen; int oobbuf; } ;
struct docg3 {int oob_autoecc; int oob_write_buf; int oob_write_ofs; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mtd_oob_ops*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct docg3 *VAR_3, loff_t VAR_4,
     struct mtd_oob_ops *VAR_5)
{
 int VAR_6 = VAR_5->ooblen, VAR_7;

 if (VAR_6 != VAR_0)
  return -VAR_1;
 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_3->oob_write_ofs = VAR_4;
 VAR_3->oob_autoecc = VAR_7;
 if (VAR_5->mode == VAR_2) {
  FUNC_0(VAR_3->oob_write_buf, VAR_5->oobbuf);
  VAR_5->oobretlen = 8;
 } else {
  FUNC_2(VAR_3->oob_write_buf, VAR_5->oobbuf, VAR_0);
  VAR_5->oobretlen = VAR_0;
 }
 return 0;
}
