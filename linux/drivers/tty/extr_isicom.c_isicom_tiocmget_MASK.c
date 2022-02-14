
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tty_struct {int name; struct isi_port* driver_data; } ;
struct isi_port {int status; } ;


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
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct isi_port*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_13)
{
 struct isi_port *VAR_14 = VAR_13->driver_data;

 u16 VAR_15 = VAR_14->status;

 if (FUNC_0(VAR_14, VAR_13->name, "isicom_ioctl"))
  return -VAR_0;

 return ((VAR_15 & VAR_6) ? VAR_12 : 0) |
  ((VAR_15 & VAR_4) ? VAR_10 : 0) |
  ((VAR_15 & VAR_2) ? VAR_7 : 0) |
  ((VAR_15 & VAR_3) ? VAR_9 : 0) |
  ((VAR_15 & VAR_1) ? VAR_8 : 0) |
  ((VAR_15 & VAR_5 ) ? VAR_11 : 0);
}
