
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {int Flags2; int Mid; } ;
struct cifs_ses {int capabilities; int server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const,int const,int *,void**) ;

int
FUNC_2(const int VAR_4, const int VAR_5,
       struct cifs_ses *VAR_6, void **VAR_7)
{
 int VAR_8;
 struct smb_hdr *VAR_9;

 VAR_8 = FUNC_1(VAR_4, VAR_5, ((void*)0), VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_9 = (struct smb_hdr *)*VAR_7;
 VAR_9->Mid = FUNC_0(VAR_6->server);
 if (VAR_6->capabilities & VAR_1)
  VAR_9->Flags2 |= VAR_3;
 if (VAR_6->capabilities & VAR_0)
  VAR_9->Flags2 |= VAR_2;






 return VAR_8;
}
