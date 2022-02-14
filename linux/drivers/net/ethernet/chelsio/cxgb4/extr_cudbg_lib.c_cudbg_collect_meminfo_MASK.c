
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_ver_hdr {int size; int revision; int signature; } ;
struct cudbg_meminfo {int dummy; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int sys_err; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,struct cudbg_meminfo*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_init*,struct cudbg_buffer*) ;
 int FUNC_3 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;

int FUNC_4(struct cudbg_init *VAR_2,
     struct cudbg_buffer *VAR_3,
     struct cudbg_error *VAR_4)
{
 struct adapter *VAR_5 = VAR_2->adap;
 struct cudbg_buffer VAR_6 = { 0 };
 struct cudbg_meminfo *VAR_7;
 struct cudbg_ver_hdr *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_2, VAR_3,
       sizeof(struct cudbg_ver_hdr) +
       sizeof(struct cudbg_meminfo),
       &VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_8 = (struct cudbg_ver_hdr *)VAR_6.data;
 VAR_8->signature = VAR_0;
 VAR_8->revision = VAR_1;
 VAR_8->size = sizeof(struct cudbg_meminfo);

 VAR_7 = (struct cudbg_meminfo *)(VAR_6.data +
      sizeof(*VAR_8));
 VAR_9 = FUNC_0(VAR_5, VAR_7);
 if (VAR_9) {
  VAR_4->sys_err = VAR_9;
  FUNC_2(VAR_2, &VAR_6);
  return VAR_9;
 }

 return FUNC_3(VAR_2, &VAR_6, VAR_3);
}
