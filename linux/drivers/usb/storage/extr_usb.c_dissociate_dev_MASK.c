
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int pusb_intf; int iobuf_dma; int iobuf; int pusb_dev; int cr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct us_data *VAR_1)
{

 FUNC_0(VAR_1->cr);
 FUNC_1(VAR_1->pusb_dev, VAR_0, VAR_1->iobuf, VAR_1->iobuf_dma);


 FUNC_2(VAR_1->pusb_intf, ((void*)0));
}
