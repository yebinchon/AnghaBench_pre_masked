
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvec {int dummy; } ;
struct cifs_io_parms {int volatile_fid; int persistent_fid; } ;
struct cifs_fid {int volatile_fid; int persistent_fid; } ;


 int FUNC_0 (unsigned int const,struct cifs_io_parms*,unsigned int*,struct kvec*,unsigned long) ;

__attribute__((used)) static int
FUNC_1(const unsigned int VAR_0, struct cifs_fid *VAR_1,
  struct cifs_io_parms *VAR_2, unsigned int *VAR_3,
  struct kvec *VAR_4, unsigned long VAR_5)
{

 VAR_2->persistent_fid = VAR_1->persistent_fid;
 VAR_2->volatile_fid = VAR_1->volatile_fid;
 return FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
}
