
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct de_private {scalar_t__ media_type; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct de_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 struct de_private* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct de_private*,int ,struct net_device*,char*,int,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6)
{
 struct de_private *VAR_7 = FUNC_3(VAR_6);
 u32 VAR_8;

 if (VAR_7->media_type != VAR_0)
  return -VAR_1;
 if (FUNC_4(VAR_7->dev))
  FUNC_0(VAR_7);

 VAR_8 = FUNC_1(VAR_4);
 FUNC_2(VAR_4, (VAR_8 & ~VAR_3) | VAR_2);
 FUNC_5(VAR_7, VAR_5, VAR_6, "link nway restart, status %x,%x\n",
     VAR_8, FUNC_1(VAR_4));
 return 0;
}
