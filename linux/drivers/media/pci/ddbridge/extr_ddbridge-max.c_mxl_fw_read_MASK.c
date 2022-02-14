
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ddb_link {int nr; struct ddb* dev; } ;
struct ddb {int dev; } ;


 int FUNC_0 (struct ddb*,int ,int *,int,int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 struct ddb_link *VAR_3 = VAR_0;
 struct ddb *VAR_4 = VAR_3->dev;

 FUNC_1(VAR_4->dev, "Read mxl_fw from link %u\n", VAR_3->nr);

 return FUNC_0(VAR_4, VAR_3->nr, VAR_1, 0xc0000, VAR_2);
}
