
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hnae_handle {scalar_t__ port_type; int dev; } ;
struct dsaf_device {int desc_num; int dsaf_ver; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct hnae_handle*) ;
 struct dsaf_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hnae_handle *VAR_9,
          u32 *VAR_10, u32 *VAR_11,
          u32 *VAR_12, u32 *VAR_13,
          u32 *VAR_14, u32 *VAR_15,
          u32 *VAR_16, u32 *VAR_17)
{
 struct dsaf_device *VAR_18;

 FUNC_1(VAR_9);

 VAR_18 = FUNC_2(VAR_9->dev);

 *VAR_10 = VAR_6;
 *VAR_11 = VAR_2;

 if (FUNC_0(VAR_18->dsaf_ver) ||
     VAR_9->port_type == VAR_0)
  *VAR_12 =
   (VAR_18->desc_num - 1 > VAR_5) ?
   VAR_5 : VAR_18->desc_num - 1;
 else
  *VAR_12 = 1;

 *VAR_13 = (VAR_18->desc_num - 1 > VAR_1) ?
  VAR_1 : VAR_18->desc_num - 1;
 *VAR_14 = VAR_8;
 *VAR_15 = VAR_4;
 *VAR_16 = VAR_7;
 *VAR_17 = VAR_3;
}
