
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct alua_dh_data* handler_data; } ;
struct alua_port_group {int lock; int flags; } ;
struct alua_dh_data {int pg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct alua_port_group* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (char const*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_4, const char *VAR_5)
{
 struct alua_dh_data *VAR_6 = VAR_4->handler_data;
 struct alua_port_group *VAR_7 = ((void*)0);
 unsigned int VAR_8 = 0, VAR_9;
 const char *VAR_10 = VAR_5;
 int VAR_11 = VAR_3;
 unsigned long VAR_12;

 if ((FUNC_5(VAR_5, "%u", &VAR_9) != 1) || (VAR_9 != 1))
  return -VAR_1;

 while (*VAR_10++)
  ;
 if ((FUNC_5(VAR_10, "%u", &VAR_8) != 1) || (VAR_8 > 1))
  return -VAR_1;

 FUNC_1();
 VAR_7 = FUNC_0(VAR_6->pg);
 if (!VAR_7) {
  FUNC_2();
  return -VAR_2;
 }
 FUNC_3(&VAR_7->lock, VAR_12);
 if (VAR_8)
  VAR_7->flags |= VAR_0;
 else
  VAR_7->flags &= ~VAR_0;
 FUNC_4(&VAR_7->lock, VAR_12);
 FUNC_2();

 return VAR_11;
}
