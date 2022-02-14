
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct enic {unsigned int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (struct enic*,int,int,int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct enic* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_10)
{
 struct enic *VAR_11 = FUNC_4(VAR_10);
 int VAR_12 = 1;
 int VAR_13 = (VAR_10->flags & VAR_4) ? 1 : 0;
 int VAR_14 = (VAR_10->flags & VAR_3) ? 1 : 0;
 int VAR_15 = (VAR_10->flags & VAR_5) ||
  FUNC_5(VAR_10) > VAR_1;
 int VAR_16 = (VAR_10->flags & VAR_2) ||
  FUNC_3(VAR_10) > VAR_0;
 unsigned int VAR_17 = VAR_10->flags |
  (VAR_16 ? VAR_2 : 0) |
  (VAR_15 ? VAR_5 : 0);

 if (VAR_11->flags != VAR_17) {
  VAR_11->flags = VAR_17;
  FUNC_2(VAR_11, VAR_12,
   VAR_13, VAR_14, VAR_15, VAR_16);
 }

 if (!VAR_15) {
  FUNC_1(VAR_10, VAR_8, VAR_9);
  if (!VAR_16)
   FUNC_0(VAR_10, VAR_6, VAR_7);
 }
}
