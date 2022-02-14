
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fastrpc_buf {int phys; int virt; int size; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct fastrpc_buf*) ;

__attribute__((used)) static void FUNC_3(struct fastrpc_buf *VAR_0)
{
 FUNC_1(VAR_0->dev, VAR_0->size, VAR_0->virt,
     FUNC_0(VAR_0->phys));
 FUNC_2(VAR_0);
}
