
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct onenand_chip {int oob_buf; int (* read_bufferram ) (struct mtd_info*,int ,int ,int ,int ) ;} ;
struct mtd_info {int oobsize; struct onenand_chip* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int *,int ,int,int) ;
 int FUNC_1 (struct mtd_info*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, uint8_t *VAR_2, int VAR_3,
    int VAR_4)
{
 struct onenand_chip *VAR_5 = VAR_1->priv;
 int VAR_6;

 VAR_5->read_bufferram(VAR_1, VAR_0, VAR_5->oob_buf, 0,
        VAR_1->oobsize);
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_5->oob_buf,
       VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 return 0;
}
