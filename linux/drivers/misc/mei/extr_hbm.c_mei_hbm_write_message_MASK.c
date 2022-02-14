
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_msg_hdr {int length; } ;
struct mei_device {int dummy; } ;


 int FUNC_0 (struct mei_device*,struct mei_msg_hdr*,int,void const*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct mei_device *VAR_0,
     struct mei_msg_hdr *VAR_1,
     const void *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, sizeof(*VAR_1), VAR_2, VAR_1->length);
}
