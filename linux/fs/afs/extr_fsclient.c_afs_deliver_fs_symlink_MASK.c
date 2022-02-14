
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_call {int out_volsync; int out_dir_scb; int out_scb; int out_fid; int * buffer; int unmarshall; } ;
typedef int __be32 ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct afs_call*) ;
 int FUNC_3 (int const**,struct afs_call*,int ) ;
 int FUNC_4 (int const**,int ) ;
 int FUNC_5 (int const**,int ) ;

__attribute__((used)) static int FUNC_6(struct afs_call *VAR_0)
{
 const __be32 *VAR_1;
 int VAR_2;

 FUNC_0("{%u}", VAR_0->unmarshall);

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;


 VAR_1 = VAR_0->buffer;
 FUNC_4(&VAR_1, VAR_0->out_fid);
 VAR_2 = FUNC_3(&VAR_1, VAR_0, VAR_0->out_scb);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_3(&VAR_1, VAR_0, VAR_0->out_dir_scb);
 if (VAR_2 < 0)
  return VAR_2;
 FUNC_5(&VAR_1, VAR_0->out_volsync);

 FUNC_1(" = 0 [done]");
 return 0;
}
