
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdswap_dev {int page_buf; int oob_buf; int page_data; int revmap; int eb_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mtdswap_dev *VAR_0)
{
 FUNC_1(VAR_0->eb_data);
 FUNC_1(VAR_0->revmap);
 FUNC_1(VAR_0->page_data);
 FUNC_0(VAR_0->oob_buf);
 FUNC_0(VAR_0->page_buf);
}
