
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int length; int type; } ;
struct TYPE_6__ {TYPE_2__ header; int data; } ;
struct TYPE_4__ {int length; } ;
struct vt220_sccb {TYPE_3__ msg; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char const*,unsigned int) ;
 int FUNC_1 (struct vt220_sccb*,int ,int) ;
 int FUNC_2 (int ,struct vt220_sccb*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(const char *VAR_4, unsigned int VAR_5)
{
 struct vt220_sccb *VAR_6;

 VAR_6 = (struct vt220_sccb *) VAR_3;
 if (sizeof(*VAR_6) + VAR_5 >= VAR_0)
  VAR_5 = VAR_0 - sizeof(*VAR_6);
 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 FUNC_0(&VAR_6->msg.data, VAR_4, VAR_5);
 VAR_6->header.length = sizeof(*VAR_6) + VAR_5;
 VAR_6->msg.header.length = sizeof(VAR_6->msg) + VAR_5;
 VAR_6->msg.header.type = VAR_1;
 FUNC_2(VAR_2, VAR_6);
}
