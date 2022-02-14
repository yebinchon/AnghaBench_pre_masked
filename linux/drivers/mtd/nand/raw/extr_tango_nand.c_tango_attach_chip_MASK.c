
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_ecc_ctrl {int strength; int write_oob; int read_oob; int write_page; int read_page; int write_page_raw; int read_page_raw; int bytes; int algo; int mode; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_1(struct nand_chip *VAR_10)
{
 struct nand_ecc_ctrl *VAR_11 = &VAR_10->ecc;

 VAR_11->mode = VAR_3;
 VAR_11->algo = VAR_2;
 VAR_11->bytes = FUNC_0(VAR_11->strength * VAR_1, VAR_0);

 VAR_11->read_page_raw = VAR_6;
 VAR_11->write_page_raw = VAR_9;
 VAR_11->read_page = VAR_5;
 VAR_11->write_page = VAR_8;
 VAR_11->read_oob = VAR_4;
 VAR_11->write_oob = VAR_7;

 return 0;
}
