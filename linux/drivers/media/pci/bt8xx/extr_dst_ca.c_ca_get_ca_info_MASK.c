
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int* messages; } ;
typedef int slot_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 scalar_t__ FUNC_1 (struct dst_state*,int*,int,int*,int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct dst_state *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 static u8 VAR_11[8] = {0x07, 0x40, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff};
 const int VAR_12 = 8, VAR_13 = 4, VAR_14 = 7;

 FUNC_2(&VAR_11[0], VAR_11[0]);
 if ((FUNC_1(VAR_6, VAR_11, sizeof (VAR_11), VAR_6->messages, VAR_4)) < 0) {
  FUNC_0(VAR_5, VAR_1, 1, " -->dst_put_ci FAILED !");
  return -VAR_3;
 }
 FUNC_0(VAR_5, VAR_2, 1, " -->dst_put_ci SUCCESS !");


 FUNC_0(VAR_5, VAR_2, 0, " DST data = [");
 for (VAR_9 = 0; VAR_9 < VAR_6->messages[0] + 1; VAR_9++) {
  FUNC_0(VAR_5, VAR_2, 0, " 0x%02x", VAR_6->messages[VAR_9]);
 }
 FUNC_0(VAR_5, VAR_2, 0, "]\n");


 VAR_10 = VAR_6->messages[VAR_14];
 if (VAR_10 >= 100) {
  VAR_10 = 100;
  FUNC_0(VAR_5, VAR_1, 1, "Invalid number of ids (>100). Recovering.");
 }
 FUNC_3(&VAR_6->messages[0], VAR_0, VAR_10 * 2);

 FUNC_0(VAR_5, VAR_2, 0, " CA_INFO = [");
 VAR_7 = VAR_12;
 VAR_8 = VAR_13;
 for(VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  FUNC_0(VAR_5, VAR_2, 0, " 0x%02x%02x", VAR_6->messages[VAR_7 + 0], VAR_6->messages[VAR_7 + 1]);

  VAR_6->messages[VAR_8 + 0] = VAR_6->messages[VAR_7 + 0];
  VAR_6->messages[VAR_8 + 1] = VAR_6->messages[VAR_7 + 1];
  VAR_7 += 2;
  VAR_8 += 2;
 }
 FUNC_0(VAR_5, VAR_2, 0, "]\n");

 return 0;
}
