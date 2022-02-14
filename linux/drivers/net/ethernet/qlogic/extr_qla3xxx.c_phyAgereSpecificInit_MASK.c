
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql3_adapter {size_t mac_index; int ndev; } ;


 int* VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ql3_adapter*,int,int) ;
 int FUNC_2 (struct ql3_adapter*,int,int,int ) ;

__attribute__((used)) static void FUNC_3(struct ql3_adapter *VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_1->ndev, "enabling Agere specific PHY\n");

 FUNC_2(VAR_1, 0x00, 0x1940, VAR_2);

 FUNC_2(VAR_1, 0x12, 0x840e, VAR_2);

 FUNC_2(VAR_1, 0x10, 0x8805, VAR_2);

 FUNC_2(VAR_1, 0x11, 0xf03e, VAR_2);

 FUNC_2(VAR_1, 0x10, 0x8806, VAR_2);

 FUNC_2(VAR_1, 0x11, 0x003e, VAR_2);

 FUNC_2(VAR_1, 0x10, 0x8807, VAR_2);

 FUNC_2(VAR_1, 0x11, 0x1f00, VAR_2);

 FUNC_2(VAR_1, 0x10, 0x2806, VAR_2);

 FUNC_2(VAR_1, 0x11,
       0x0020 | (VAR_0[VAR_1->mac_index] >> 8), VAR_2);





 FUNC_1(VAR_1, 0x12, 0x840a);
 FUNC_1(VAR_1, 0x00, 0x1140);
 FUNC_1(VAR_1, 0x1c, 0xfaf0);
}
