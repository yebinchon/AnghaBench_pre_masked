
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char const*,size_t,int ) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_5,
        char **VAR_6, size_t VAR_7,
        char **VAR_8, size_t VAR_9)
{
 size_t VAR_10;
 char *VAR_11;

 if (FUNC_4(!VAR_5 || !*VAR_5)) {
  FUNC_0(VAR_4, "NFS: device name not specified\n");
  return -VAR_0;
 }


 if (*VAR_5 == '[') {
  VAR_11 = FUNC_2(++VAR_5, ']');
  if (VAR_11 == ((void*)0) || VAR_11[1] != ':')
   goto out_bad_devname;

  VAR_10 = VAR_11 - VAR_5;
  VAR_11++;
 } else {
  char *VAR_12;

  VAR_11 = FUNC_2(VAR_5, ':');
  if (VAR_11 == ((void*)0))
   goto out_bad_devname;
  VAR_10 = VAR_11 - VAR_5;


  VAR_12 = FUNC_2(VAR_5, ',');
  if (VAR_12 != ((void*)0) && VAR_12 < VAR_11)
   VAR_10 = VAR_12 - VAR_5;
 }

 if (VAR_10 > VAR_7)
  goto out_hostname;


 *VAR_6 = FUNC_1(VAR_5, VAR_10, VAR_3);
 if (*VAR_6 == ((void*)0))
  goto out_nomem;
 VAR_10 = FUNC_3(++VAR_11);
 if (VAR_10 > VAR_9)
  goto out_path;
 *VAR_8 = FUNC_1(VAR_11, VAR_10, VAR_3);
 if (!*VAR_8)
  goto out_nomem;

 FUNC_0(VAR_4, "NFS: MNTPATH: '%s'\n", *VAR_8);
 return 0;

out_bad_devname:
 FUNC_0(VAR_4, "NFS: device name not in host:path format\n");
 return -VAR_0;

out_nomem:
 FUNC_0(VAR_4, "NFS: not enough memory to parse device name\n");
 return -VAR_2;

out_hostname:
 FUNC_0(VAR_4, "NFS: server hostname too long\n");
 return -VAR_1;

out_path:
 FUNC_0(VAR_4, "NFS: export pathname too long\n");
 return -VAR_1;
}
