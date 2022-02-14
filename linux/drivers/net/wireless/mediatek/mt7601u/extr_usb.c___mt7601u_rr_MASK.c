
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int dev; int vend_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mt7601u_dev*,int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct mt7601u_dev*,int ,int ) ;

__attribute__((used)) static u32 FUNC_5(struct mt7601u_dev *VAR_4, u32 VAR_5)
{
 int VAR_6;
 u32 VAR_7 = ~0;

 FUNC_0(VAR_5 > VAR_3, "read high off:%08x", VAR_5);

 VAR_6 = FUNC_3(VAR_4, VAR_1, VAR_2,
         0, VAR_5, VAR_4->vend_buf, VAR_0);
 if (VAR_6 == VAR_0)
  VAR_7 = FUNC_2(VAR_4->vend_buf);
 else if (VAR_6 > 0)
  FUNC_1(VAR_4->dev, "Error: wrong size read:%d off:%08x\n",
   VAR_6, VAR_5);

 FUNC_4(VAR_4, VAR_5, VAR_7);
 return VAR_7;
}
