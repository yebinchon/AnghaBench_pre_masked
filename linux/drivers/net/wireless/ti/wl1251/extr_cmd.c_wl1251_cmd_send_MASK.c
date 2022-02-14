
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct wl1251_cmd_header {scalar_t__ status; int id; } ;
struct wl1251 {int cmd_box_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct wl1251*,int ,void*,size_t) ;
 int FUNC_6 (struct wl1251*,int ) ;
 int FUNC_7 (struct wl1251*,int ,int) ;

int FUNC_8(struct wl1251 *VAR_8, u16 VAR_9, void *VAR_10, size_t VAR_11)
{
 struct wl1251_cmd_header *VAR_12;
 unsigned long VAR_13;
 u32 VAR_14;
 int VAR_15 = 0;

 VAR_12 = VAR_10;
 VAR_12->id = VAR_9;
 VAR_12->status = 0;

 FUNC_0(VAR_11 % 4 != 0);

 FUNC_5(VAR_8, VAR_8->cmd_box_addr, VAR_10, VAR_11);

 FUNC_7(VAR_8, VAR_2, VAR_4);

 VAR_13 = VAR_7 + FUNC_1(VAR_6);

 VAR_14 = FUNC_6(VAR_8, VAR_1);
 while (!(VAR_14 & VAR_5)) {
  if (FUNC_3(VAR_7, VAR_13)) {
   FUNC_4("command complete timeout");
   VAR_15 = -VAR_3;
   goto out;
  }

  FUNC_2(1);

  VAR_14 = FUNC_6(VAR_8, VAR_1);
 }

 FUNC_7(VAR_8, VAR_0,
      VAR_5);

out:
 return VAR_15;
}
