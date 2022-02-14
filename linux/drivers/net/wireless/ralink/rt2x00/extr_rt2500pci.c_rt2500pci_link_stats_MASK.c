
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct link_qual {void* false_cca; void* rx_failed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct rt2x00_dev *VAR_4,
     struct link_qual *VAR_5)
{
 u32 VAR_6;




 VAR_6 = FUNC_1(VAR_4, VAR_0);
 VAR_5->rx_failed = FUNC_0(VAR_6, VAR_1);




 VAR_6 = FUNC_1(VAR_4, VAR_2);
 VAR_5->false_cca = FUNC_0(VAR_6, VAR_3);
}
