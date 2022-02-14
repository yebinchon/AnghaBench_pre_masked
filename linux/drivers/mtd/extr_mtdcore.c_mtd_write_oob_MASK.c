
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_oob_ops {int datbuf; scalar_t__ retlen; int len; scalar_t__ oobbuf; scalar_t__ oobretlen; } ;
struct mtd_info {int flags; int (* _write_oob ) (struct mtd_info*,int ,struct mtd_oob_ops*) ;int (* _write ) (struct mtd_info*,int ,int ,scalar_t__*,int ) ;} ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mtd_info*,int ,struct mtd_oob_ops*) ;
 int FUNC_2 (struct mtd_info*,int ,struct mtd_oob_ops*) ;
 int FUNC_3 (struct mtd_info*,int ,int ,scalar_t__*,int ) ;

int FUNC_4(struct mtd_info *VAR_3, loff_t VAR_4,
    struct mtd_oob_ops *VAR_5)
{
 int VAR_6;

 VAR_5->retlen = VAR_5->oobretlen = 0;

 if (!(VAR_3->flags & VAR_2))
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_0();


 if (!VAR_3->_write_oob && (!VAR_3->_write || VAR_5->oobbuf))
  return -VAR_0;

 if (VAR_3->_write_oob)
  return VAR_3->_write_oob(VAR_3, VAR_4, VAR_5);
 else
  return VAR_3->_write(VAR_3, VAR_4, VAR_5->len, &VAR_5->retlen,
       VAR_5->datbuf);
}
