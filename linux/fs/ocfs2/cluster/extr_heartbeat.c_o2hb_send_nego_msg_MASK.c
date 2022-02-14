
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct o2hb_nego_msg {int node_num; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,struct o2hb_nego_msg*,int,int ,int*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(int VAR_2, int VAR_3, u8 VAR_4)
{
 struct o2hb_nego_msg VAR_5;
 int VAR_6, VAR_7;

 VAR_5.node_num = FUNC_2();
again:
 VAR_7 = FUNC_1(VAR_3, VAR_2, &VAR_5, sizeof(VAR_5),
   VAR_4, &VAR_6);

 if (VAR_7 == -VAR_0 || VAR_7 == -VAR_1) {
  FUNC_0(100);
  goto again;
 }

 return VAR_7;
}
