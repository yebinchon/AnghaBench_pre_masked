
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int WordCount; } ;
struct TYPE_3__ {int DataCount; int ParameterCount; int DataOffset; int ParameterOffset; } ;
struct smb_t2_rsp {TYPE_2__ hdr; TYPE_1__ t2_rsp; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 unsigned int FUNC_1 (TYPE_2__*) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct smb_t2_rsp *VAR_3)
{
 unsigned int VAR_4;


 if (VAR_3->hdr.WordCount < 10)
  goto vt2_err;


 if (FUNC_2(&VAR_3->t2_rsp.ParameterOffset) > 1024 ||
     FUNC_2(&VAR_3->t2_rsp.DataOffset) > 1024)
  goto vt2_err;

 VAR_4 = FUNC_2(&VAR_3->t2_rsp.ParameterCount);
 if (VAR_4 >= 512)
  goto vt2_err;




 VAR_4 += FUNC_2(&VAR_3->t2_rsp.DataCount);
 if (VAR_4 > FUNC_1(&VAR_3->hdr) ||
     VAR_4 >= VAR_0 + VAR_2)
  goto vt2_err;

 return 0;
vt2_err:
 FUNC_0("Invalid transact2 SMB: ", (char *)VAR_3,
  sizeof(struct smb_t2_rsp) + 16);
 return -VAR_1;
}
