
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_io_priv {int dummy; } ;
struct TYPE_2__ {int pages; int descs; } ;
struct fuse_io_args {TYPE_1__ ap; struct fuse_io_priv* io; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ,int *) ;
 int FUNC_1 (struct fuse_io_args*) ;
 struct fuse_io_args* FUNC_2 (int,int ) ;

__attribute__((used)) static struct fuse_io_args *FUNC_3(struct fuse_io_priv *VAR_1,
       unsigned int VAR_2)
{
 struct fuse_io_args *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  VAR_3->io = VAR_1;
  VAR_3->ap.pages = FUNC_0(VAR_2, VAR_0,
      &VAR_3->ap.descs);
  if (!VAR_3->ap.pages) {
   FUNC_1(VAR_3);
   VAR_3 = ((void*)0);
  }
 }
 return VAR_3;
}
