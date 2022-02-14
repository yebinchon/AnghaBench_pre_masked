
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct niu*,int ,int ,int,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_12, int VAR_13, u64 *VAR_14)
{
 FUNC_2(VAR_7, VAR_14[0]);
 FUNC_2(VAR_8, VAR_14[1]);
 FUNC_2(VAR_9, VAR_14[2]);
 FUNC_2(VAR_10, VAR_14[3]);
 FUNC_2(VAR_11, VAR_14[4]);
 FUNC_2(VAR_5, VAR_6);
 FUNC_2(VAR_0,
      (VAR_3 |
       (0 << VAR_4) |
       (FUNC_0(VAR_12->port) << VAR_2)));

 return FUNC_1(VAR_12, VAR_0, VAR_1,
       1000, 100);
}
