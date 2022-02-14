
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct slgt_info* driver_data; } ;
struct slgt_info {int device_name; scalar_t__ tx_active; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct slgt_info*,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_1)
{
 struct slgt_info *VAR_2 = VAR_1->driver_data;
 int VAR_3;

 if (FUNC_1(VAR_2, VAR_1->name, "write_room"))
  return 0;
 VAR_3 = (VAR_2->tx_active) ? 0 : VAR_0;
 FUNC_0(("%s write_room=%d\n", VAR_2->device_name, VAR_3));
 return VAR_3;
}
