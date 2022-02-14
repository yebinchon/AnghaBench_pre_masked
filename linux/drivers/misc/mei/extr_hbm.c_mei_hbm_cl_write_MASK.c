
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mei_msg_hdr {int dummy; } ;
struct mei_device {int dummy; } ;
struct mei_cl {int dummy; } ;


 int FUNC_0 (struct mei_cl*,int ,void*,size_t) ;
 int FUNC_1 (struct mei_msg_hdr*,size_t) ;
 int FUNC_2 (struct mei_device*,struct mei_msg_hdr*,void*) ;

__attribute__((used)) static inline int FUNC_3(struct mei_device *VAR_0, struct mei_cl *VAR_1,
       u8 VAR_2, void *VAR_3, size_t VAR_4)
{
 struct mei_msg_hdr VAR_5;

 FUNC_1(&VAR_5, VAR_4);
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 return FUNC_2(VAR_0, &VAR_5, VAR_3);
}
