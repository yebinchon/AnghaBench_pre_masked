
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct se_device {int dummy; } ;
struct fd_dev {int fbd_flags; int fd_dev_size; int fd_dev_name; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct fd_dev* FUNC_0 (struct se_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,int ,int *) ;
 int FUNC_4 (int *,int*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (char*,int ,int *) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,...) ;
 char* FUNC_10 (char**,char*) ;
 int VAR_9 ;

__attribute__((used)) static ssize_t FUNC_11(struct se_device *VAR_10,
  const char *VAR_11, ssize_t VAR_12)
{
 struct fd_dev *VAR_13 = FUNC_0(VAR_10);
 char *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 substring_t VAR_18[VAR_8];
 int VAR_19 = 0, VAR_20, VAR_21;

 VAR_17 = FUNC_2(VAR_11, VAR_7);
 if (!VAR_17)
  return -VAR_1;

 VAR_14 = VAR_17;

 while ((VAR_15 = FUNC_10(&VAR_17, ",\n")) != ((void*)0)) {
  if (!*VAR_15)
   continue;

  VAR_21 = FUNC_7(VAR_15, VAR_9, VAR_18);
  switch (VAR_21) {
  case 129:
   if (FUNC_6(VAR_13->fd_dev_name, &VAR_18[0],
    VAR_6) == 0) {
    VAR_19 = -VAR_0;
    break;
   }
   FUNC_8("FILEIO: Referencing Path: %s\n",
     VAR_13->fd_dev_name);
   VAR_13->fbd_flags |= VAR_2;
   break;
  case 128:
   VAR_16 = FUNC_5(&VAR_18[0]);
   if (!VAR_16) {
    VAR_19 = -VAR_1;
    break;
   }
   VAR_19 = FUNC_3(VAR_16, 0, &VAR_13->fd_dev_size);
   FUNC_1(VAR_16);
   if (VAR_19 < 0) {
    FUNC_9("kstrtoull() failed for"
      " fd_dev_size=\n");
    goto out;
   }
   FUNC_8("FILEIO: Referencing Size: %llu"
     " bytes\n", VAR_13->fd_dev_size);
   VAR_13->fbd_flags |= VAR_3;
   break;
  case 130:
   VAR_19 = FUNC_4(VAR_18, &VAR_20);
   if (VAR_19)
    goto out;
   if (VAR_20 != 1) {
    FUNC_9("bogus fd_buffered_io=%d value\n", VAR_20);
    VAR_19 = -VAR_0;
    goto out;
   }

   FUNC_8("FILEIO: Using buffered I/O"
    " operations for struct fd_dev\n");

   VAR_13->fbd_flags |= VAR_5;
   break;
  case 131:
   VAR_19 = FUNC_4(VAR_18, &VAR_20);
   if (VAR_19)
    goto out;
   if (VAR_20 != 1) {
    FUNC_9("bogus fd_async_io=%d value\n", VAR_20);
    VAR_19 = -VAR_0;
    goto out;
   }

   FUNC_8("FILEIO: Using async I/O"
    " operations for struct fd_dev\n");

   VAR_13->fbd_flags |= VAR_4;
   break;
  default:
   break;
  }
 }

out:
 FUNC_1(VAR_14);
 return (!VAR_19) ? VAR_12 : VAR_19;
}
