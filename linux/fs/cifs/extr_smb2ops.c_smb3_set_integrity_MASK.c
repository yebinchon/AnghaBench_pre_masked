
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsctl_set_integrity_information_req {scalar_t__ Reserved; scalar_t__ Flags; int ChecksumAlgorithm; } ;
struct cifs_tcon {int dummy; } ;
struct TYPE_2__ {int volatile_fid; int persistent_fid; } ;
struct cifsFileInfo {TYPE_1__ fid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,int ,int,char*,int,int ,int *,unsigned int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const unsigned int VAR_3, struct cifs_tcon *VAR_4,
     struct cifsFileInfo *VAR_5)
{
 struct fsctl_set_integrity_information_req VAR_6;
 unsigned int VAR_7;

 VAR_6.ChecksumAlgorithm = FUNC_1(VAR_0);
 VAR_6.Flags = 0;
 VAR_6.Reserved = 0;

 return FUNC_0(VAR_3, VAR_4, VAR_5->fid.persistent_fid,
   VAR_5->fid.volatile_fid,
   VAR_2,
   1 ,
   (char *)&VAR_6,
   sizeof(struct fsctl_set_integrity_information_req),
   VAR_1, ((void*)0),
   &VAR_7);

}
