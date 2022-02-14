
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dev_db_entry {int port; int * isid; int * ip_addr; int options; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct dev_db_entry *VAR_5,
      struct dev_db_entry *VAR_6)
{
 uint16_t VAR_7 = 0;
 size_t VAR_8 = VAR_1;

 VAR_7 = FUNC_0(VAR_5->options);
 if (VAR_7 & VAR_0)
  VAR_8 = VAR_2;

 if (FUNC_1(VAR_5->ip_addr, VAR_6->ip_addr, VAR_8))
  return VAR_3;

 if (FUNC_1(&VAR_5->isid[0], &VAR_6->isid[0],
     sizeof(VAR_5->isid)))
  return VAR_3;

 if (FUNC_1(&VAR_5->port, &VAR_6->port,
     sizeof(VAR_5->port)))
  return VAR_3;

 return VAR_4;
}
