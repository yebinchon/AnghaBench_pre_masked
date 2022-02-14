
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct niu_link_config {scalar_t__ loopback_mode; } ;
struct niu {int port; struct niu_link_config link_config; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct niu*,unsigned long,int) ;
 int FUNC_1 (struct niu*,unsigned long,int) ;
 int FUNC_2 (struct niu*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_13)
{
 struct niu_link_config *VAR_14 = &VAR_13->link_config;
 u32 VAR_15, VAR_16;
 unsigned long VAR_17;

 VAR_15 = (VAR_11 | VAR_12);
 VAR_16 = (VAR_4 | VAR_8 |
    VAR_3 | VAR_7 |
    VAR_6);

 if (VAR_14->loopback_mode == VAR_1) {
  u16 VAR_18 = VAR_9;

  FUNC_2(VAR_13, VAR_13->port, VAR_2,
      VAR_0, VAR_18);

  VAR_15 |= VAR_10;
  VAR_16 |= VAR_5;
 }


 for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
  int VAR_19 = FUNC_1(VAR_13, VAR_17, VAR_15);
  if (VAR_19)
   return VAR_19;
 }

 for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
  int VAR_20 = FUNC_0(VAR_13, VAR_17, VAR_16);
  if (VAR_20)
   return VAR_20;
 }

 return 0;
}
