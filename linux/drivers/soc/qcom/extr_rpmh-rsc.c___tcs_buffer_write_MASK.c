
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcs_request {int num_cmds; struct tcs_cmd* cmds; scalar_t__ wait_for_compl; } ;
struct tcs_cmd {int wait; int addr; int data; } ;
struct rsc_drv {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct rsc_drv*,int ,int,int ) ;
 int FUNC_2 (struct rsc_drv*,int,int,int,struct tcs_cmd*) ;
 int FUNC_3 (struct rsc_drv*,int ,int,int,int) ;
 int FUNC_4 (struct rsc_drv*,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct rsc_drv *VAR_8, int VAR_9, int VAR_10,
          const struct tcs_request *VAR_11)
{
 u32 VAR_12, VAR_13;
 u32 VAR_14 = 0;
 u32 VAR_15;
 struct tcs_cmd *VAR_16;
 int VAR_17, VAR_18;

 VAR_13 = VAR_0;
 VAR_13 |= VAR_11->wait_for_compl ? VAR_1 : 0;
 VAR_13 |= VAR_2;

 VAR_15 = FUNC_1(VAR_8, VAR_7, VAR_9, 0);

 for (VAR_17 = 0, VAR_18 = VAR_10; VAR_17 < VAR_11->num_cmds; VAR_17++, VAR_18++) {
  VAR_16 = &VAR_11->cmds[VAR_17];
  VAR_14 |= FUNC_0(VAR_18);
  VAR_15 |= VAR_16->wait << VAR_18;
  VAR_12 = VAR_13;
  VAR_12 |= VAR_16->wait ? VAR_1 : 0;

  FUNC_3(VAR_8, VAR_6, VAR_9, VAR_18, VAR_12);
  FUNC_3(VAR_8, VAR_3, VAR_9, VAR_18, VAR_16->addr);
  FUNC_3(VAR_8, VAR_4, VAR_9, VAR_18, VAR_16->data);
  FUNC_2(VAR_8, VAR_9, VAR_18, VAR_12, VAR_16);
 }

 FUNC_4(VAR_8, VAR_7, VAR_9, VAR_15);
 VAR_14 |= FUNC_1(VAR_8, VAR_5, VAR_9, 0);
 FUNC_4(VAR_8, VAR_5, VAR_9, VAR_14);
}
