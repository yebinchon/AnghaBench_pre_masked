
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_fclose; } ;
struct TYPE_6__ {TYPE_1__ cifs_stats; } ;
struct cifs_tcon {TYPE_2__ stats; int ses; } ;
typedef int __u16 ;
struct TYPE_7__ {scalar_t__ ByteCount; int FileID; } ;
typedef TYPE_3__ FINDCLOSE_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int const,int ,char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,struct cifs_tcon*,void**) ;

int
FUNC_5(const unsigned int VAR_4, struct cifs_tcon *VAR_5,
       const __u16 VAR_6)
{
 int VAR_7 = 0;
 FINDCLOSE_REQ *VAR_8 = ((void*)0);

 FUNC_1(VAR_1, "In CIFSSMBFindClose\n");
 VAR_7 = FUNC_4(VAR_2, 1, VAR_5, (void **)&VAR_8);



 if (VAR_7 == -VAR_0)
  return 0;
 if (VAR_7)
  return VAR_7;

 VAR_8->FileID = VAR_6;
 VAR_8->ByteCount = 0;
 VAR_7 = FUNC_0(VAR_4, VAR_5->ses, (char *) VAR_8, 0);
 FUNC_2(VAR_8);
 if (VAR_7)
  FUNC_1(VAR_3, "Send error in FindClose = %d\n", VAR_7);

 FUNC_3(&VAR_5->stats.cifs_stats.num_fclose);


 if (VAR_7 == -VAR_0)
  VAR_7 = 0;

 return VAR_7;
}
